/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LegacySystemOperation.h"
#import "DTCancellable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSData, NSString, NSError;

@interface BaseOperation : XXUnknownSuperclass <DTCancellable, LegacySystemOperation> {
	NSString* _operationType;
	NSDictionary* _parameters;
	int _operationCode;
	int _statusCode;
	int _retryCount;
	NSString* _statusMessage;
	NSString* _requestId;
	NSString* _requestOpt;
	NSString* _URLString;
	NSData* _responseData;
	NSDictionary* _responseJSON;
	NSError* _lastError;
@private
	int _timeoutInterval;
}
@property(retain, nonatomic) NSDictionary* responseJSON;
@property(retain, nonatomic) NSData* responseData;
@property(assign, nonatomic) int timeoutInterval;
@property(retain, nonatomic) NSError* lastError;
@property(retain, nonatomic) NSString* URLString;
@property(retain, nonatomic) NSString* statusMessage;
@property(assign, nonatomic) int statusCode;
@property(assign, nonatomic) int operationCode;
@property(retain, nonatomic) NSString* requestId;
@property(retain, nonatomic) NSString* requestOpt;
@property(retain, nonatomic) NSDictionary* parameters;
@property(retain, nonatomic) NSString* operationType;
-(int)recvData:(id)data retCode:(int)code;
-(id)clientID;
-(id)serverURL;
-(void)retryAction;
-(id)executeOperation:(id)operation args:(id)args;
-(void)main;
-(id)operationName;
-(id)initWithOperationType:(id)operationType andParameters:(id)parameters;
-(id)init;
-(void)dealloc;
@end

