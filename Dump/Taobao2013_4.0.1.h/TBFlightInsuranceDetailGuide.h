//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImageView, UILabel;

@interface TBFlightInsuranceDetailGuide : UIView
{
    NSArray *_stringArray;
    NSMutableArray *_labelArray;
    NSMutableArray *_tapArray;
    UIImageView *_iconImageView;
    UILabel *_checkTextLabel;
    UILabel *_orTextLabel;
    UILabel *_detailTextLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)labelArraybyStrings:(id)arg1;
- (id)labelWithFont:(id)arg1 color:(id)arg2;
- (float)calculateWidthAccordingText:(id)arg1 byHeight:(float)arg2;
- (void)doInitialization;
- (id)initWithFrame:(struct CGRect)arg1;

@end
