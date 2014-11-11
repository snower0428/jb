//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePinchDistortionFilter : GPUImageFilter
{
    int radiusUniform;
    int centerUniform;
    int scaleUniform;
    float _radius;
    float _scale;
    struct CGPoint _center;
}

@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (id)init;

@end

