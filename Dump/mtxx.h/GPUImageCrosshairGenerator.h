//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageCrosshairGenerator : GPUImageFilter
{
    int crosshairWidthUniform;
    int crosshairColorUniform;
    float _crosshairWidth;
}

@property(nonatomic) float crosshairWidth; // @synthesize crosshairWidth=_crosshairWidth;
- (void)setCrosshairColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (void)renderCrosshairsFromArray:(float *)arg1 count:(unsigned int)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (id)init;

@end

