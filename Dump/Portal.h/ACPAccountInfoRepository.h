/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACPAccountInfoData;

@interface ACPAccountInfoRepository : XXUnknownSuperclass {
@private
	ACPAccountInfoData* _data;
}
@property(retain, nonatomic) ACPAccountInfoData* data;
+(id)shareInstance;
-(void).cxx_destruct;
-(id)getFromMem;
-(void)cacheInMem:(id)mem;
@end
