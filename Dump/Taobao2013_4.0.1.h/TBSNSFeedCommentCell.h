//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBSNSFeedCommentItem, UIImageView, UILabel;

@interface TBSNSFeedCommentCell : UITableViewCell
{
    TBSNSFeedCommentItem *_item;
    UIImageView *_headerImgView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
    UIImageView *_accountIconMask;
    UILabel *_parentContent;
    UIImageView *_parentLabelBgView;
    UILabel *_floorLabel;
    UIImageView *_floorBgImg;
}

+ (float)heightForCellOfItem:(id)arg1 isForMyReply:(BOOL)arg2;
+ (id)cellIdentifier;
+ (id)createCell;
@property(retain, nonatomic) UIImageView *floorBgImg; // @synthesize floorBgImg=_floorBgImg;
@property(retain, nonatomic) UILabel *floorLabel; // @synthesize floorLabel=_floorLabel;
@property(retain, nonatomic) UIImageView *parentLabelBgView; // @synthesize parentLabelBgView=_parentLabelBgView;
@property(retain, nonatomic) UILabel *parentContent; // @synthesize parentContent=_parentContent;
@property(retain, nonatomic) UIImageView *accountIconMask; // @synthesize accountIconMask=_accountIconMask;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) TBSNSFeedCommentItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setData:(id)arg1 isForMyReply:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)initImageViews;
- (void)config;
- (id)reuseIdentifier;

@end
