/* File generated with Shader Minifier 1.1.6
 * http://www.ctrl-alt-test.fr
 */
#ifndef FRAG_PRESENT_H_
# define FRAG_PRESENT_H_
# define VAR_T "v"

const char *present_frag =
 "#version 120\n"
 "uniform sampler2D v;"
 "void main()"
 "{"
   "vec2 z=gl_FragCoord.xy/gl_TexCoord[0].xy;"
   "vec4 m=texture2D(v,z);"
   "m/=m.w;"
   "m*=2.5;"
   "m/=m+1.;"
   "m=pow(m,vec4(.45));"
   "m=smoothstep(0.,1.,m);"
   "m.xyz=mix(vec3(0,.03,.05),vec3(1,1,1),m.xyz);"
   "gl_FragColor=m;"
 "}";

#endif // FRAG_PRESENT_H_
