//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDelegate.h"

@class TBTableViewController;

@interface TBTableViewDelegate : NSObject <UITableViewDelegate>
{
    TBTableViewController *_controller;
}

- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) TBTableViewController *controller;
- (id)initWithController:(id)arg1;

@end
