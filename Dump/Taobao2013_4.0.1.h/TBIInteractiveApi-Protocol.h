//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest;

@protocol TBIInteractiveApi <NSObject>
- (id <TBIResponseParser>)getResponseParser;
- (ASIHTTPRequest *)getHttpRequest;

@optional
- (BOOL)isFinished;
- (id)mock;
@end

