//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageFilter, GPUImageGaussianBlurFilter;

@interface GPUImageGaussianSelectiveBlurFilter : GPUImageFilterGroup
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageFilter *selectiveFocusFilter;
    BOOL hasOverriddenAspectRatio;
    float _excludeCircleRadius;
    float _excludeBlurSize;
    float _blurSize;
    float _aspectRatio;
    struct CGPoint _excludeCirclePoint;
}

@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) float excludeBlurSize; // @synthesize excludeBlurSize=_excludeBlurSize;
@property(nonatomic) float excludeCircleRadius; // @synthesize excludeCircleRadius=_excludeCircleRadius;
@property(nonatomic) struct CGPoint excludeCirclePoint; // @synthesize excludeCirclePoint=_excludeCirclePoint;
- (void).cxx_destruct;
@property(nonatomic) float blurSize; // @synthesize blurSize=_blurSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (id)init;

@end

