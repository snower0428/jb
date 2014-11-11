/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

@interface DTDataCacheItem : XXUnknownSuperclass {
@private
	id dataInfo;
	NSDate* expireTime;
	NSDate* expireStartTime;
	double expireInterval;
}
@property(assign, nonatomic) double expireInterval;
@property(retain, nonatomic) NSDate* expireStartTime;
@property(assign, nonatomic) __weak NSDate* expireTime;
@property(retain, nonatomic) id dataInfo;
-(void).cxx_destruct;
-(void)dealloc;
-(BOOL)isExpired;
-(void)updaeteCachceExpire;
-(id)initWithData:(id)data withExpireStartTime:(id)expireStartTime withInterval:(double)interval;
-(id)initWithData:(id)data withExpireTime:(id)expireTime;
@end

