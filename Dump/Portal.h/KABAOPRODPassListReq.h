/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface KABAOPRODPassListReq : XXUnknownSuperclass {
@private
	BOOL _needPaging;
	NSString* _passCategory;
	NSString* _timeStatus;
	int _rowSize;
	int _pageSize;
	NSString* _updateFlag;
}
@property(retain, nonatomic) NSString* updateFlag;
@property(assign, nonatomic) int pageSize;
@property(assign, nonatomic) int rowSize;
@property(assign, nonatomic) BOOL needPaging;
@property(retain, nonatomic) NSString* timeStatus;
@property(retain, nonatomic) NSString* passCategory;
-(void).cxx_destruct;
@end
