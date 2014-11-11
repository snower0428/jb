/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSArray, NSMutableArray;

@interface QueryIntegrationRecordsOperation : BaseOperation {
	int _page;
	BOOL _hasMoreData;
	NSMutableArray* _records;
}
@property(readonly, assign, nonatomic) BOOL hasMoreData;
@property(readonly, assign, nonatomic) NSArray* records;
-(void)main;
-(void)dealloc;
-(id)initWithPage:(int)page;
@end

