//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTitleLabelCell.h"

@class UIActivityIndicatorView, UITextField;

@interface MTTitleLabelAndRightAlignTextCell : MTTitleLabelCell
{
    UITextField *_rightTextField;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UITextField *rightTextField; // @synthesize rightTextField=_rightTextField;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1;

@end

