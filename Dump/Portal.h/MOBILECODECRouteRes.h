/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MOBILECODECRouteRes : XXUnknownSuperclass {
@private
	BOOL _success;
	int _resultCode;
	NSString* _memo;
	NSString* _routeInfos;
}
@property(retain, nonatomic) NSString* routeInfos;
@property(retain, nonatomic) NSString* memo;
@property(assign, nonatomic) int resultCode;
@property(assign, nonatomic) BOOL success;
-(void).cxx_destruct;
-(id)dictionary;
@end
