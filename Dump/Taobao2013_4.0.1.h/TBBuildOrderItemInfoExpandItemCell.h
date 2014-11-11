//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTableViewCell.h"

@class TBExpandCellData, TBExpandImageView;

@interface TBBuildOrderItemInfoExpandItemCell : TBTableViewCell
{
    TBExpandImageView *_expandImageView;
    TBExpandCellData *_expandCellData;
    id _delegate;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBExpandCellData *expandCellData; // @synthesize expandCellData=_expandCellData;
@property(retain, nonatomic) TBExpandImageView *expandImageView; // @synthesize expandImageView=_expandImageView;
- (void).cxx_destruct;
- (void)expandButtonClicked:(id)arg1;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
