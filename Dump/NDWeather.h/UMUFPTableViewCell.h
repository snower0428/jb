//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UMUFPImageView;

@interface UMUFPTableViewCell : UITableViewCell
{
    UMUFPImageView *_mImageView;
    UIImageView *_mNewIcon;
}

@property(retain, nonatomic) UIImageView *mNewIcon; // @synthesize mNewIcon=_mNewIcon;
@property(retain, nonatomic) UMUFPImageView *mImageView; // @synthesize mImageView=_mImageView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setImageURL:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
