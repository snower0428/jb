//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UITableViewDataSource.h"

@class NSArray, NSDate;

@protocol KalDataSource <NSObject, UITableViewDataSource>
- (void)removeAllItems;
- (void)loadItemsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2;
- (NSArray *)markedDatesFrom:(NSDate *)arg1 to:(NSDate *)arg2;
- (void)presentingDatesFrom:(NSDate *)arg1 to:(NSDate *)arg2 delegate:(id <KalDataSourceCallbacks>)arg3;
@end
