//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface MTFragmentHeaderCell : MTBaseCell
{
    UIImageView *_iconView;
    UIImage *_icon;
    NSString *_title;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
