//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCOutput.h"

@class NSObject<OS_dispatch_semaphore>, TXCProgram;

@interface TXCYUV2RGBInput : TXCOutput
{
    TXCProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yTextureUniform;
    int uTextureUniform;
    int vTextureUniform;
    int yuvConversionMatrixUniform;
    unsigned int yTexture;
    unsigned int uTexture;
    unsigned int vTexture;
    struct CGSize uploadedImageSize;
    const float *preferredConversion;
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
    int _strideWidth;
    int _bufLen;
    float _stridedTexCoord;
    char *_strideBuf;
    long long _dataType;
    char *_data_bgra;
    char *_data_rgba;
    struct CGSize _data_size;
}

@property(nonatomic) struct CGSize data_size; // @synthesize data_size=_data_size;
@property(nonatomic) char *data_rgba; // @synthesize data_rgba=_data_rgba;
@property(nonatomic) char *data_bgra; // @synthesize data_bgra=_data_bgra;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) float stridedTexCoord; // @synthesize stridedTexCoord=_stridedTexCoord;
@property(nonatomic) int bufLen; // @synthesize bufLen=_bufLen;
@property(nonatomic) int strideWidth; // @synthesize strideWidth=_strideWidth;
@property(nonatomic) char *strideBuf; // @synthesize strideBuf=_strideBuf;
- (void).cxx_destruct;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)convertYUVToRGBOutput;
- (void)innerProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)strideFrame:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)uploadBytes:(char *)arg1;
- (void)processBytes:(char *)arg1 inputSize:(struct CGSize)arg2;
- (void)initInput;
- (id)init;

@end

