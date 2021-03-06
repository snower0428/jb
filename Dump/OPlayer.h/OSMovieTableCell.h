//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableLinkedItemCell.h"

@class OSFeed, TTImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface OSMovieTableCell : TTTableLinkedItemCell
{
    UILabel *titleLabel;
    UILabel *artistLabel;
    UILabel *releaseDateLabel;
    UILabel *priceLabel;
    UILabel *genreLabel;
    TTImageView *movieImageView;
    UIImageView *_shadowImageView;
    UIImageView *_seperatorImgView;
    OSFeed *_feedItem;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
+ (id)getTableCellWithIdentifier:(id)arg1;
+ (id)loadCellFromXIB;
@property(retain, nonatomic) OSFeed *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) UIImageView *seperatorImgView; // @synthesize seperatorImgView=_seperatorImgView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) TTImageView *movieImageView; // @synthesize movieImageView;
@property(retain, nonatomic) UILabel *genreLabel; // @synthesize genreLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel;
@property(retain, nonatomic) UILabel *releaseDateLabel; // @synthesize releaseDateLabel;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void)setJsonObject:(id)arg1;
- (void)setSearchMovieFeed:(id)arg1;
- (void)setObject:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)initSelf;

@end

