//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCFilter.h"

@class NSMutableDictionary, TXCFramebuffer, TXCProgram;

@interface TXCTwoPassFilter : TXCFilter
{
    TXCFramebuffer *secondOutputFramebuffer;
    TXCProgram *secondFilterProgram;
    int secondFilterPositionAttribute;
    int secondFilterTextureCoordinateAttribute;
    int secondFilterInputTextureUniform;
    int secondFilterInputTextureUniform2;
    NSMutableDictionary *secondProgramUniformStateRestorationBlocks;
}

- (void).cxx_destruct;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(CDUnknownBlockType)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)removeOutputFramebuffer;
- (id)framebufferForOutput;
- (void)initializeSecondaryAttributes;
- (id)initWithFirstStageFragmentShaderFromString:(id)arg1 secondStageFragmentShaderFromString:(id)arg2;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

