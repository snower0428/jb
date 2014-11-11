//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTableViewCell.h"

@class UIImageView, UILabel;

@interface TBGameCenterPlayerProfileCell : TBTableViewCell
{
    UIImageView *_avatar;
    UILabel *_playerNameLabel;
    UILabel *_scoreTitleLabel;
    UILabel *_scoreLabel;
    UILabel *_scratchCardTitleLabel;
    UILabel *_scratchCardNumberLabel;
    UIImageView *_bgScratchCardView;
    id <TBGameCenterPlayerProfileDelegate> _delegate;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) id <TBGameCenterPlayerProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *bgScratchCardView; // @synthesize bgScratchCardView=_bgScratchCardView;
@property(retain, nonatomic) UILabel *scratchCardNumberLabel; // @synthesize scratchCardNumberLabel=_scratchCardNumberLabel;
@property(retain, nonatomic) UILabel *scratchCardTitleLabel; // @synthesize scratchCardTitleLabel=_scratchCardTitleLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *scoreTitleLabel; // @synthesize scoreTitleLabel=_scoreTitleLabel;
@property(retain, nonatomic) UILabel *playerNameLabel; // @synthesize playerNameLabel=_playerNameLabel;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scratchCardAction:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

