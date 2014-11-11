//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class GLProgram;

@interface GPUImageTwoPassFilter : GPUImageFilter
{
    unsigned int secondFilterOutputTexture;
    GLProgram *secondFilterProgram;
    int secondFilterPositionAttribute;
    int secondFilterTextureCoordinateAttribute;
    int secondFilterInputTextureUniform;
    int secondFilterInputTextureUniform2;
    unsigned int secondFilterFramebuffer;
}

- (void).cxx_destruct;
- (void)prepareForImageCapture;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (void)setOutputFBO;
- (void)setSecondFilterFBO;
- (void)destroyFilterFBO;
- (void)createFilterFBOofSize:(struct CGSize)arg1;
- (void)deleteOutputTexture;
- (void)initializeOutputTexture;
- (unsigned int)textureForOutput;
- (void)initializeAttributes;
- (id)initWithFirstStageFragmentShaderFromString:(id)arg1 secondStageFragmentShaderFromString:(id)arg2;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

