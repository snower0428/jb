//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;
    BOOL _headphonesPresent;
    float _euVolumeLimit;
}

+ (BOOL)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_euVolumeLimit;
@property(nonatomic) BOOL headphonesPresent; // @synthesize headphonesPresent=_headphonesPresent;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)drawBlockForValue:(float)arg1 point:(struct CGPoint)arg2;
- (void)setProgress:(float)arg1;
- (id)init;
- (void)_updateLabels;
- (void)_updateImage;

@end

