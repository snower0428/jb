//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (BlurredFrame)
- (id)applyBlurWithRadius:(float)arg1 tintColor:(id)arg2 saturationDeltaFactor:(float)arg3 maskImage:(id)arg4 atFrame:(struct CGRect)arg5;
- (id)applyTintEffectWithColor:(id)arg1 atFrame:(struct CGRect)arg2;
- (id)applyDarkEffectAtFrame:(struct CGRect)arg1;
- (id)applyExtraLightEffectAtFrame:(struct CGRect)arg1;
- (id)applyLightEffectAtFrame:(struct CGRect)arg1;
- (id)applyLightBluredAtFrame:(struct CGRect)arg1;
- (id)addImageToImage:(id)arg1 atRect:(struct CGRect)arg2;
- (id)croppedImageAtFrame:(struct CGRect)arg1;
@end
