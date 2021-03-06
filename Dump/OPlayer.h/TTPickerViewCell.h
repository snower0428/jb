//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTView.h"

@class NSString, UIFont, UILabel;

@interface TTPickerViewCell : TTView
{
    id _object;
    UILabel *_labelView;
    BOOL _selected;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *label;
- (id)style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

