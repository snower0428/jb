//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassTextureSamplingFilter.h"

@interface GPUImageFastBlurFilter : GPUImageTwoPassTextureSamplingFilter
{
    unsigned int _blurPasses;
    float _blurSize;
}

@property(nonatomic) float blurSize; // @synthesize blurSize=_blurSize;
@property(nonatomic) unsigned int blurPasses; // @synthesize blurPasses=_blurPasses;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

