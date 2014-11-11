//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDelegate.h"

@class NSMutableDictionary, TTTableViewController;

@interface TTTableViewDelegate : NSObject <UITableViewDelegate>
{
    TTTableViewController *_controller;
    NSMutableDictionary *_headers;
}

@property(readonly, nonatomic) TTTableViewController *controller; // @synthesize controller=_controller;
- (void)tableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

