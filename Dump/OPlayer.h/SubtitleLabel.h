//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SubtitleLabel : UILabel
{
    int defaultlayer;
    BOOL defaultlayerSet;
    long long defaultlayerStart1;
    long long defaultlayerDuration1;
    NSString *defaultlayerText1;
    long long defaultlayerStart2;
    long long defaultlayerDuration2;
    NSString *defaultlayerText2;
    int layer2;
    BOOL layer2Set;
    NSString *layer2Text;
}

@property(retain, nonatomic) NSString *layer2Text; // @synthesize layer2Text;
@property(retain, nonatomic) NSString *defaultlayerText2; // @synthesize defaultlayerText2;
@property long long defaultlayerDuration2; // @synthesize defaultlayerDuration2;
@property long long defaultlayerStart2; // @synthesize defaultlayerStart2;
@property(retain, nonatomic) NSString *defaultlayerText1; // @synthesize defaultlayerText1;
@property long long defaultlayerDuration1; // @synthesize defaultlayerDuration1;
@property long long defaultlayerStart1; // @synthesize defaultlayerStart1;
@property BOOL layer2Set; // @synthesize layer2Set;
@property int layer2; // @synthesize layer2;
@property BOOL defaultlayerSet; // @synthesize defaultlayerSet;
@property int defaultlayer; // @synthesize defaultlayer;
- (void)dealloc;
- (id)defaultlayerSubtitle;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

