//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCLanLanAlbumProductCell.h"

@class UILabel;

@interface ATCLanLanSingleProductCell : ATCLanLanAlbumProductCell
{
    UILabel *_contentLabel;
}

+ (float)height;
- (void).cxx_destruct;
- (void)setAtcListItem:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)imageDisplayViewRect;
- (id)placeHolderImageForRect:(struct CGRect)arg1;
- (void)relayoutTagView;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

