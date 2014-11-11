//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary;

@interface DetailsTableCell : UITableViewCell
{
    NSDictionary *_theme;
    float _detailsCellHeight;
    id _delegate;
    NSDictionary *_dataSourceInfo;
}

@property(copy, nonatomic) NSDictionary *dataSourceInfo; // @synthesize dataSourceInfo=_dataSourceInfo;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float detailsCellHeight; // @synthesize detailsCellHeight=_detailsCellHeight;
@property(retain, nonatomic) NSDictionary *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)create:(id)arg1 theme:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

