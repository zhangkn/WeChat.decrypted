//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

@class EJCanvasContextWebGL, NSMutableDictionary;

@interface EJBindingCanvasContextWebGL : EJBindingBase
{
    _Bool unpackFlipY;
    _Bool premultiplyAlpha;
    struct OpaqueJSValue *jsCanvas;
    EJCanvasContextWebGL *renderingContext;
    NSMutableDictionary *renderbuffers;
    NSMutableDictionary *framebuffers;
    NSMutableDictionary *buffers;
    NSMutableDictionary *textures;
    NSMutableDictionary *programs;
    NSMutableDictionary *shaders;
    NSMutableDictionary *extensions;
    NSMutableDictionary *vertexArrays;
    CDStruct_063a1299 textureUnits[8];
    CDStruct_063a1299 *activeTexture;
}

+ (id)_const_BROWSER_DEFAULT_WEBGL;
+ (id)_const_UNPACK_COLORSPACE_CONVERSION_WEBGL;
+ (id)_const_CONTEXT_LOST_WEBGL;
+ (id)_const_UNPACK_PREMULTIPLY_ALPHA_WEBGL;
+ (id)_const_UNPACK_FLIP_Y_WEBGL;
+ (id)_const_INVALID_FRAMEBUFFER_OPERATION;
+ (id)_const_MAX_RENDERBUFFER_SIZE;
+ (id)_const_RENDERBUFFER_BINDING;
+ (id)_const_FRAMEBUFFER_BINDING;
+ (id)_const_FRAMEBUFFER_UNSUPPORTED;
+ (id)_const_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
+ (id)_const_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
+ (id)_const_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
+ (id)_const_FRAMEBUFFER_COMPLETE;
+ (id)_const_NONE;
+ (id)_const_DEPTH_STENCIL_ATTACHMENT;
+ (id)_const_STENCIL_ATTACHMENT;
+ (id)_const_DEPTH_ATTACHMENT;
+ (id)_const_COLOR_ATTACHMENT0;
+ (id)_const_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
+ (id)_const_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
+ (id)_const_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
+ (id)_const_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
+ (id)_const_RENDERBUFFER_STENCIL_SIZE;
+ (id)_const_RENDERBUFFER_DEPTH_SIZE;
+ (id)_const_RENDERBUFFER_ALPHA_SIZE;
+ (id)_const_RENDERBUFFER_BLUE_SIZE;
+ (id)_const_RENDERBUFFER_GREEN_SIZE;
+ (id)_const_RENDERBUFFER_RED_SIZE;
+ (id)_const_RENDERBUFFER_INTERNAL_FORMAT;
+ (id)_const_RENDERBUFFER_HEIGHT;
+ (id)_const_RENDERBUFFER_WIDTH;
+ (id)_const_DEPTH_STENCIL;
+ (id)_const_STENCIL_INDEX8;
+ (id)_const_STENCIL_INDEX;
+ (id)_const_DEPTH_COMPONENT16;
+ (id)_const_RGB565;
+ (id)_const_RGB5_A1;
+ (id)_const_RGBA4;
+ (id)_const_RENDERBUFFER;
+ (id)_const_FRAMEBUFFER;
+ (id)_const_HIGH_INT;
+ (id)_const_MEDIUM_INT;
+ (id)_const_LOW_INT;
+ (id)_const_HIGH_FLOAT;
+ (id)_const_MEDIUM_FLOAT;
+ (id)_const_LOW_FLOAT;
+ (id)_const_NUM_SHADER_BINARY_FORMATS;
+ (id)_const_SHADER_BINARY_FORMATS;
+ (id)_const_SHADER_COMPILER;
+ (id)_const_SHADER_SOURCE_LENGTH;
+ (id)_const_INFO_LOG_LENGTH;
+ (id)_const_COMPILE_STATUS;
+ (id)_const_IMPLEMENTATION_COLOR_READ_FORMAT;
+ (id)_const_IMPLEMENTATION_COLOR_READ_TYPE;
+ (id)_const_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
+ (id)_const_VERTEX_ATTRIB_ARRAY_POINTER;
+ (id)_const_VERTEX_ATTRIB_ARRAY_NORMALIZED;
+ (id)_const_VERTEX_ATTRIB_ARRAY_TYPE;
+ (id)_const_VERTEX_ATTRIB_ARRAY_STRIDE;
+ (id)_const_VERTEX_ATTRIB_ARRAY_SIZE;
+ (id)_const_VERTEX_ATTRIB_ARRAY_ENABLED;
+ (id)_const_SAMPLER_CUBE;
+ (id)_const_SAMPLER_2D;
+ (id)_const_FLOAT_MAT4;
+ (id)_const_FLOAT_MAT3;
+ (id)_const_FLOAT_MAT2;
+ (id)_const_BOOL_VEC4;
+ (id)_const_BOOL_VEC3;
+ (id)_const_BOOL_VEC2;
+ (id)_const_BOOL;
+ (id)_const_INT_VEC4;
+ (id)_const_INT_VEC3;
+ (id)_const_INT_VEC2;
+ (id)_const_FLOAT_VEC4;
+ (id)_const_FLOAT_VEC3;
+ (id)_const_FLOAT_VEC2;
+ (id)_const_MIRRORED_REPEAT;
+ (id)_const_CLAMP_TO_EDGE;
+ (id)_const_REPEAT;
+ (id)_const_ACTIVE_TEXTURE;
+ (id)_const_TEXTURE31;
+ (id)_const_TEXTURE30;
+ (id)_const_TEXTURE29;
+ (id)_const_TEXTURE28;
+ (id)_const_TEXTURE27;
+ (id)_const_TEXTURE26;
+ (id)_const_TEXTURE25;
+ (id)_const_TEXTURE24;
+ (id)_const_TEXTURE23;
+ (id)_const_TEXTURE22;
+ (id)_const_TEXTURE21;
+ (id)_const_TEXTURE20;
+ (id)_const_TEXTURE19;
+ (id)_const_TEXTURE18;
+ (id)_const_TEXTURE17;
+ (id)_const_TEXTURE16;
+ (id)_const_TEXTURE15;
+ (id)_const_TEXTURE14;
+ (id)_const_TEXTURE13;
+ (id)_const_TEXTURE12;
+ (id)_const_TEXTURE11;
+ (id)_const_TEXTURE10;
+ (id)_const_TEXTURE9;
+ (id)_const_TEXTURE8;
+ (id)_const_TEXTURE7;
+ (id)_const_TEXTURE6;
+ (id)_const_TEXTURE5;
+ (id)_const_TEXTURE4;
+ (id)_const_TEXTURE3;
+ (id)_const_TEXTURE2;
+ (id)_const_TEXTURE1;
+ (id)_const_TEXTURE0;
+ (id)_const_MAX_CUBE_MAP_TEXTURE_SIZE;
+ (id)_const_TEXTURE_CUBE_MAP_NEGATIVE_Z;
+ (id)_const_TEXTURE_CUBE_MAP_POSITIVE_Z;
+ (id)_const_TEXTURE_CUBE_MAP_NEGATIVE_Y;
+ (id)_const_TEXTURE_CUBE_MAP_POSITIVE_Y;
+ (id)_const_TEXTURE_CUBE_MAP_NEGATIVE_X;
+ (id)_const_TEXTURE_CUBE_MAP_POSITIVE_X;
+ (id)_const_TEXTURE_BINDING_CUBE_MAP;
+ (id)_const_TEXTURE_CUBE_MAP;
+ (id)_const_TEXTURE;
+ (id)_const_TEXTURE_WRAP_T;
+ (id)_const_TEXTURE_WRAP_S;
+ (id)_const_TEXTURE_MIN_FILTER;
+ (id)_const_TEXTURE_MAG_FILTER;
+ (id)_const_LINEAR_MIPMAP_LINEAR;
+ (id)_const_NEAREST_MIPMAP_LINEAR;
+ (id)_const_LINEAR_MIPMAP_NEAREST;
+ (id)_const_NEAREST_MIPMAP_NEAREST;
+ (id)_const_LINEAR;
+ (id)_const_NEAREST;
+ (id)_const_EXTENSIONS;
+ (id)_const_VERSION;
+ (id)_const_RENDERER;
+ (id)_const_VENDOR;
+ (id)_const_DECR_WRAP;
+ (id)_const_INCR_WRAP;
+ (id)_const_INVERT;
+ (id)_const_DECR;
+ (id)_const_INCR;
+ (id)_const_REPLACE;
+ (id)_const_KEEP;
+ (id)_const_ALWAYS;
+ (id)_const_GEQUAL;
+ (id)_const_NOTEQUAL;
+ (id)_const_GREATER;
+ (id)_const_LEQUAL;
+ (id)_const_EQUAL;
+ (id)_const_LESS;
+ (id)_const_NEVER;
+ (id)_const_CURRENT_PROGRAM;
+ (id)_const_SHADING_LANGUAGE_VERSION;
+ (id)_const_ACTIVE_ATTRIBUTE_MAX_LENGTH;
+ (id)_const_ACTIVE_ATTRIBUTES;
+ (id)_const_ACTIVE_UNIFORM_MAX_LENGTH;
+ (id)_const_ACTIVE_UNIFORMS;
+ (id)_const_ATTACHED_SHADERS;
+ (id)_const_VALIDATE_STATUS;
+ (id)_const_LINK_STATUS;
+ (id)_const_DELETE_STATUS;
+ (id)_const_SHADER_TYPE;
+ (id)_const_MAX_FRAGMENT_UNIFORM_VECTORS;
+ (id)_const_MAX_TEXTURE_IMAGE_UNITS;
+ (id)_const_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
+ (id)_const_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
+ (id)_const_MAX_VARYING_VECTORS;
+ (id)_const_MAX_VERTEX_UNIFORM_VECTORS;
+ (id)_const_MAX_VERTEX_ATTRIBS;
+ (id)_const_VERTEX_SHADER;
+ (id)_const_FRAGMENT_SHADER;
+ (id)_const_UNSIGNED_SHORT_5_6_5;
+ (id)_const_UNSIGNED_SHORT_5_5_5_1;
+ (id)_const_UNSIGNED_SHORT_4_4_4_4;
+ (id)_const_LUMINANCE_ALPHA;
+ (id)_const_LUMINANCE;
+ (id)_const_RGBA;
+ (id)_const_RGB;
+ (id)_const_ALPHA;
+ (id)_const_DEPTH_COMPONENT;
+ (id)_const_FIXED;
+ (id)_const_FLOAT;
+ (id)_const_UNSIGNED_INT;
+ (id)_const_INT;
+ (id)_const_UNSIGNED_SHORT;
+ (id)_const_SHORT;
+ (id)_const_UNSIGNED_BYTE;
+ (id)_const_BYTE;
+ (id)_const_GENERATE_MIPMAP_HINT;
+ (id)_const_NICEST;
+ (id)_const_FASTEST;
+ (id)_const_DONT_CARE;
+ (id)_const_COMPRESSED_TEXTURE_FORMATS;
+ (id)_const_NUM_COMPRESSED_TEXTURE_FORMATS;
+ (id)_const_SAMPLE_COVERAGE_INVERT;
+ (id)_const_SAMPLE_COVERAGE_VALUE;
+ (id)_const_SAMPLES;
+ (id)_const_SAMPLE_BUFFERS;
+ (id)_const_TEXTURE_BINDING_2D;
+ (id)_const_POLYGON_OFFSET_FACTOR;
+ (id)_const_POLYGON_OFFSET_UNITS;
+ (id)_const_STENCIL_BITS;
+ (id)_const_DEPTH_BITS;
+ (id)_const_ALPHA_BITS;
+ (id)_const_BLUE_BITS;
+ (id)_const_GREEN_BITS;
+ (id)_const_RED_BITS;
+ (id)_const_SUBPIXEL_BITS;
+ (id)_const_MAX_VIEWPORT_DIMS;
+ (id)_const_MAX_TEXTURE_SIZE;
+ (id)_const_PACK_ALIGNMENT;
+ (id)_const_UNPACK_ALIGNMENT;
+ (id)_const_COLOR_WRITEMASK;
+ (id)_const_COLOR_CLEAR_VALUE;
+ (id)_const_SCISSOR_BOX;
+ (id)_const_VIEWPORT;
+ (id)_const_STENCIL_BACK_WRITEMASK;
+ (id)_const_STENCIL_BACK_VALUE_MASK;
+ (id)_const_STENCIL_BACK_REF;
+ (id)_const_STENCIL_BACK_PASS_DEPTH_PASS;
+ (id)_const_STENCIL_BACK_PASS_DEPTH_FAIL;
+ (id)_const_STENCIL_BACK_FAIL;
+ (id)_const_STENCIL_BACK_FUNC;
+ (id)_const_STENCIL_WRITEMASK;
+ (id)_const_STENCIL_VALUE_MASK;
+ (id)_const_STENCIL_REF;
+ (id)_const_STENCIL_PASS_DEPTH_PASS;
+ (id)_const_STENCIL_PASS_DEPTH_FAIL;
+ (id)_const_STENCIL_FAIL;
+ (id)_const_STENCIL_FUNC;
+ (id)_const_STENCIL_CLEAR_VALUE;
+ (id)_const_DEPTH_FUNC;
+ (id)_const_DEPTH_CLEAR_VALUE;
+ (id)_const_DEPTH_WRITEMASK;
+ (id)_const_DEPTH_RANGE;
+ (id)_const_FRONT_FACE;
+ (id)_const_CULL_FACE_MODE;
+ (id)_const_ALIASED_LINE_WIDTH_RANGE;
+ (id)_const_ALIASED_POINT_SIZE_RANGE;
+ (id)_const_LINE_WIDTH;
+ (id)_const_CCW;
+ (id)_const_CW;
+ (id)_const_OUT_OF_MEMORY;
+ (id)_const_INVALID_OPERATION;
+ (id)_const_INVALID_VALUE;
+ (id)_const_INVALID_ENUM;
+ (id)_const_NO_ERROR;
+ (id)_const_SAMPLE_COVERAGE;
+ (id)_const_SAMPLE_ALPHA_TO_COVERAGE;
+ (id)_const_POLYGON_OFFSET_FILL;
+ (id)_const_SCISSOR_TEST;
+ (id)_const_DEPTH_TEST;
+ (id)_const_STENCIL_TEST;
+ (id)_const_DITHER;
+ (id)_const_BLEND;
+ (id)_const_CULL_FACE;
+ (id)_const_TEXTURE_2D;
+ (id)_const_FRONT_AND_BACK;
+ (id)_const_BACK;
+ (id)_const_FRONT;
+ (id)_const_CURRENT_VERTEX_ATTRIB;
+ (id)_const_BUFFER_USAGE;
+ (id)_const_BUFFER_SIZE;
+ (id)_const_DYNAMIC_DRAW;
+ (id)_const_STATIC_DRAW;
+ (id)_const_STREAM_DRAW;
+ (id)_const_ELEMENT_ARRAY_BUFFER_BINDING;
+ (id)_const_ARRAY_BUFFER_BINDING;
+ (id)_const_ELEMENT_ARRAY_BUFFER;
+ (id)_const_ARRAY_BUFFER;
+ (id)_const_BLEND_COLOR;
+ (id)_const_ONE_MINUS_CONSTANT_ALPHA;
+ (id)_const_CONSTANT_ALPHA;
+ (id)_const_ONE_MINUS_CONSTANT_COLOR;
+ (id)_const_CONSTANT_COLOR;
+ (id)_const_BLEND_SRC_ALPHA;
+ (id)_const_BLEND_DST_ALPHA;
+ (id)_const_BLEND_SRC_RGB;
+ (id)_const_BLEND_DST_RGB;
+ (id)_const_FUNC_REVERSE_SUBTRACT;
+ (id)_const_FUNC_SUBTRACT;
+ (id)_const_BLEND_EQUATION_ALPHA;
+ (id)_const_BLEND_EQUATION_RGB;
+ (id)_const_BLEND_EQUATION;
+ (id)_const_FUNC_ADD;
+ (id)_const_SRC_ALPHA_SATURATE;
+ (id)_const_ONE_MINUS_DST_COLOR;
+ (id)_const_DST_COLOR;
+ (id)_const_ONE_MINUS_DST_ALPHA;
+ (id)_const_DST_ALPHA;
+ (id)_const_ONE_MINUS_SRC_ALPHA;
+ (id)_const_SRC_ALPHA;
+ (id)_const_ONE_MINUS_SRC_COLOR;
+ (id)_const_SRC_COLOR;
+ (id)_const_ONE;
+ (id)_const_ZERO;
+ (id)_const_TRIANGLE_FAN;
+ (id)_const_TRIANGLE_STRIP;
+ (id)_const_TRIANGLES;
+ (id)_const_LINE_STRIP;
+ (id)_const_LINE_LOOP;
+ (id)_const_LINES;
+ (id)_const_POINTS;
+ (id)_const_1;
+ (id)_const_0;
+ (id)_const_COLOR_BUFFER_BIT;
+ (id)_const_STENCIL_BUFFER_BIT;
+ (id)_const_DEPTH_BUFFER_BIT;
+ (void *)_ptr_to_func_viewport;
+ (void *)_ptr_to_func_vertexAttribPointer;
+ (void *)_ptr_to_func_vertexAttrib4fv;
+ (void *)_ptr_to_func_vertexAttrib3fv;
+ (void *)_ptr_to_func_vertexAttrib2fv;
+ (void *)_ptr_to_func_vertexAttrib1fv;
+ (void *)_ptr_to_func_vertexAttrib4f;
+ (void *)_ptr_to_func_vertexAttrib3f;
+ (void *)_ptr_to_func_vertexAttrib2f;
+ (void *)_ptr_to_func_vertexAttrib1f;
+ (void *)_ptr_to_func_validateProgram;
+ (void *)_ptr_to_func_useProgram;
+ (void *)_ptr_to_func_uniformMatrix4fv;
+ (void *)_ptr_to_func_uniformMatrix3fv;
+ (void *)_ptr_to_func_uniformMatrix2fv;
+ (void *)_ptr_to_func_uniform4iv;
+ (void *)_ptr_to_func_uniform3iv;
+ (void *)_ptr_to_func_uniform2iv;
+ (void *)_ptr_to_func_uniform1iv;
+ (void *)_ptr_to_func_uniform4fv;
+ (void *)_ptr_to_func_uniform3fv;
+ (void *)_ptr_to_func_uniform2fv;
+ (void *)_ptr_to_func_uniform1fv;
+ (void *)_ptr_to_func_uniform4i;
+ (void *)_ptr_to_func_uniform3i;
+ (void *)_ptr_to_func_uniform2i;
+ (void *)_ptr_to_func_uniform1i;
+ (void *)_ptr_to_func_uniform4f;
+ (void *)_ptr_to_func_uniform3f;
+ (void *)_ptr_to_func_uniform2f;
+ (void *)_ptr_to_func_uniform1f;
+ (void *)_ptr_to_func_texParameteri;
+ (void *)_ptr_to_func_texParameterf;
+ (void *)_ptr_to_func_texSubImage2D;
+ (void *)_ptr_to_func_texImage2D;
+ (void *)_ptr_to_func_stencilOpSeparate;
+ (void *)_ptr_to_func_stencilOp;
+ (void *)_ptr_to_func_stencilMaskSeparate;
+ (void *)_ptr_to_func_stencilMask;
+ (void *)_ptr_to_func_stencilFuncSeparate;
+ (void *)_ptr_to_func_stencilFunc;
+ (void *)_ptr_to_func_shaderSource;
+ (void *)_ptr_to_func_scissor;
+ (void *)_ptr_to_func_sampleCoverage;
+ (void *)_ptr_to_func_renderbufferStorage;
+ (void *)_ptr_to_func_readPixels;
+ (void *)_ptr_to_func_polygonOffset;
+ (void *)_ptr_to_func_pixelStorei;
+ (void *)_ptr_to_func_linkProgram;
+ (void *)_ptr_to_func_lineWidth;
+ (void *)_ptr_to_func_isTexture;
+ (void *)_ptr_to_func_isEnabled;
+ (void *)_ptr_to_func_isShader;
+ (void *)_ptr_to_func_isRenderbuffer;
+ (void *)_ptr_to_func_isProgram;
+ (void *)_ptr_to_func_isFramebuffer;
+ (void *)_ptr_to_func_isBuffer;
+ (void *)_ptr_to_func_hint;
+ (void *)_ptr_to_func_getVertexAttribOffset;
+ (void *)_ptr_to_func_getVertexAttrib;
+ (void *)_ptr_to_func_getUniformLocation;
+ (void *)_ptr_to_func_getUniform;
+ (void *)_ptr_to_func_getTexParameter;
+ (void *)_ptr_to_func_getShaderSource;
+ (void *)_ptr_to_func_getShaderInfoLog;
+ (void *)_ptr_to_func_getShaderPrecisionFormat;
+ (void *)_ptr_to_func_getShaderParameter;
+ (void *)_ptr_to_func_getRenderbufferParameter;
+ (void *)_ptr_to_func_getProgramInfoLog;
+ (void *)_ptr_to_func_getProgramParameter;
+ (void *)_ptr_to_func_getFramebufferAttachmentParameter;
+ (void *)_ptr_to_func_getError;
+ (void *)_ptr_to_func_getBufferParameter;
+ (void *)_ptr_to_func_getParameter;
+ (void *)_ptr_to_func_getAttribLocation;
+ (void *)_ptr_to_func_getAttachedShaders;
+ (void *)_ptr_to_func_getActiveUniform;
+ (void *)_ptr_to_func_getActiveAttrib;
+ (void *)_ptr_to_func_generateMipmap;
+ (void *)_ptr_to_func_frontFace;
+ (void *)_ptr_to_func_framebufferTexture2D;
+ (void *)_ptr_to_func_framebufferRenderbuffer;
+ (void *)_ptr_to_func_finish;
+ (void *)_ptr_to_func_flush;
+ (void *)_ptr_to_func_enableVertexAttribArray;
+ (void *)_ptr_to_func_enable;
+ (void *)_ptr_to_func_drawElements;
+ (void *)_ptr_to_func_drawArrays;
+ (void *)_ptr_to_func_disableVertexAttribArray;
+ (void *)_ptr_to_func_disable;
+ (void *)_ptr_to_func_detachShader;
+ (void *)_ptr_to_func_depthRange;
+ (void *)_ptr_to_func_depthMask;
+ (void *)_ptr_to_func_depthFunc;
+ (void *)_ptr_to_func_deleteProgram;
+ (void *)_ptr_to_func_deleteTexture;
+ (void *)_ptr_to_func_deleteShader;
+ (void *)_ptr_to_func_deleteRenderbuffer;
+ (void *)_ptr_to_func_deleteFramebuffer;
+ (void *)_ptr_to_func_deleteBuffer;
+ (void *)_ptr_to_func_cullFace;
+ (void *)_ptr_to_func_createShader;
+ (void *)_ptr_to_func_createProgram;
+ (void *)_ptr_to_func_createTexture;
+ (void *)_ptr_to_func_createRenderbuffer;
+ (void *)_ptr_to_func_createFramebuffer;
+ (void *)_ptr_to_func_createBuffer;
+ (void *)_ptr_to_func_copyTexSubImage2D;
+ (void *)_ptr_to_func_copyTexImage2D;
+ (void *)_ptr_to_func_compressedTexSubImage2D;
+ (void *)_ptr_to_func_compressedTexImage2D;
+ (void *)_ptr_to_func_compileShader;
+ (void *)_ptr_to_func_colorMask;
+ (void *)_ptr_to_func_clearStencil;
+ (void *)_ptr_to_func_clearDepth;
+ (void *)_ptr_to_func_clearColor;
+ (void *)_ptr_to_func_clear;
+ (void *)_ptr_to_func_checkFramebufferStatus;
+ (void *)_ptr_to_func_bufferSubData;
+ (void *)_ptr_to_func_bufferData;
+ (void *)_ptr_to_func_blendFuncSeparate;
+ (void *)_ptr_to_func_blendFunc;
+ (void *)_ptr_to_func_blendEquationSeparate;
+ (void *)_ptr_to_func_blendEquation;
+ (void *)_ptr_to_func_blendColor;
+ (void *)_ptr_to_func_bindTexture;
+ (void *)_ptr_to_func_bindFramebuffer;
+ (void *)_ptr_to_func_bindRenderbuffer;
+ (void *)_ptr_to_func_bindBuffer;
+ (void *)_ptr_to_func_bindAttribLocation;
+ (void *)_ptr_to_func_attachShader;
+ (void *)_ptr_to_func_activeTexture;
+ (void *)_ptr_to_func_getExtension;
+ (void *)_ptr_to_func_getSupportedExtensions;
+ (void *)_ptr_to_func_isContextLost;
+ (void *)_ptr_to_func_getContextAttributes;
+ (void *)_ptr_to_func_wxSetContextAttributes;
+ (void *)_ptr_to_get_drawingBufferHeight;
+ (void *)_ptr_to_get_drawingBufferWidth;
@property(readonly, nonatomic) EJCanvasContextWebGL *renderingContext; // @synthesize renderingContext;
- (struct OpaqueJSValue *)_func_viewport:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttribPointer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib1fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib4f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib3f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib2f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_vertexAttrib1f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_validateProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_useProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniformMatrix4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniformMatrix3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniformMatrix2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform4iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform3iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform2iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform1iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform1fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform4i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform3i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform2i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform1i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform4f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform3f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform2f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_uniform1f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_texParameteri:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_texParameterf:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_texSubImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_texImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilOpSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilOp:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilMaskSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilFuncSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_stencilFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_shaderSource:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_scissor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_sampleCoverage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_renderbufferStorage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_readPixels:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_polygonOffset:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_pixelStorei:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_linkProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_lineWidth:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isEnabled:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_hint:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getVertexAttribOffset:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getVertexAttrib:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getUniformLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getUniform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getTexParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getShaderSource:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getShaderInfoLog:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getShaderPrecisionFormat:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getShaderParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getRenderbufferParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getProgramInfoLog:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getProgramParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getFramebufferAttachmentParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getError:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getBufferParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getAttribLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getAttachedShaders:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getActiveUniform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getActiveAttrib:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_generateMipmap:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_frontFace:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_framebufferTexture2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_framebufferRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_finish:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_flush:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_enableVertexAttribArray:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_enable:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_drawElements:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_drawArrays:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_disableVertexAttribArray:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_disable:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_detachShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_depthRange:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_depthMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_depthFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_deleteBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_cullFace:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_createBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_copyTexSubImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_copyTexImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_compileShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_colorMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_clearStencil:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_clearDepth:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_clearColor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_clear:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_checkFramebufferStatus:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bufferSubData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bufferData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_blendFuncSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_blendFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_blendEquationSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_blendEquation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_blendColor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bindTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bindFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bindRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bindBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_bindAttribLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_attachShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_activeTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getExtension:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getSupportedExtensions:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isContextLost:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getContextAttributes:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_wxSetContextAttributes:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_drawingBufferHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_drawingBufferWidth:(struct OpaqueJSContext *)arg1;
- (void)deleteVertexArray:(unsigned int)arg1;
- (void)addVertexArray:(unsigned int)arg1 obj:(struct OpaqueJSValue *)arg2;
- (void)deleteFramebuffer:(unsigned int)arg1;
- (void)deleteRenderbuffer:(unsigned int)arg1;
- (void)deleteShader:(unsigned int)arg1;
- (void)deleteProgram:(unsigned int)arg1;
- (void)deleteTexture:(unsigned int)arg1;
- (void)deleteBuffer:(unsigned int)arg1;
- (_Bool)isPaused;
- (void)dealloc;
- (id)initWithRenderingContext:(id)arg1;

@end

