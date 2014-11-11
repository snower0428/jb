//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MTCityListViewController, NSArray;

@interface MTCitySearchController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _typing;
    MTCityListViewController *_cityListViewController;
    NSArray *_matchedCities;
}

@property(nonatomic, getter=isTyping) BOOL typing; // @synthesize typing=_typing;
@property(retain, nonatomic) NSArray *matchedCities; // @synthesize matchedCities=_matchedCities;
@property(nonatomic) __weak MTCityListViewController *cityListViewController; // @synthesize cityListViewController=_cityListViewController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end

