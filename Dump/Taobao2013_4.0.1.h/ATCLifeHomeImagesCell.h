//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCLifeHomeBaseCell.h"

@class UIImageView;

@interface ATCLifeHomeImagesCell : ATCLifeHomeBaseCell
{
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
}

@property(retain, nonatomic) UIImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFeed:(id)arg1;
- (void)initAdditionImageViews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
