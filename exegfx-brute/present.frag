#version 120
uniform sampler2D T;
void main(){
	vec2 uv=gl_FragCoord.xy/gl_TexCoord[0].xy;
	vec4 tex = texture2D(T,uv);
	tex /= tex.w;
	//tex /= gl_TexCoord[0].z;
	tex *= 2.5;
	tex /= tex+1.;
	tex = pow(tex, vec4(.45));
	tex = smoothstep(0.,1.,tex);
	tex.rgb = mix(vec3(0,.03,.05),vec3(1,1,1),tex.rgb);
	gl_FragColor = tex;
}