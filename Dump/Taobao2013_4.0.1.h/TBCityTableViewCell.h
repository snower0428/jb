//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath;

@interface TBCityTableViewCell : UITableViewCell
{
    NSIndexPath *_indexPath;
    id _item;
    id <TBCityTableViewCellDelegate> _delegate;
}

+ (float)tableView:(id)arg1 variantRowHeightForItem:(id)arg2 AtIndex:(id)arg3;
@property(nonatomic) id <TBCityTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

