//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface TBGuaGuaKaCell : UITableViewCell
{
    UIView *_cutLine;
    UIImageView *_headImageView;
    UILabel *_titleLabel;
    UIImage *_headImage;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)setData:(id)arg1 title:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)labelWithColorStyle:(int)arg1 fontStyle:(int)arg2;

@end

