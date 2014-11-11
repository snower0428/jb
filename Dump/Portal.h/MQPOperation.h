/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPURLRequestOperation.h"

@class MQPRequestParams, NSString;

@interface MQPOperation : MQPURLRequestOperation {
@private
	NSString* _resultObject;
	MQPRequestParams* _tempParams;
}
@property(retain, nonatomic) MQPRequestParams* tempParams;
@property(retain, nonatomic) NSString* resultObject;
-(id)getRequestModelDictionary;
-(void)didFinish;
-(id)buildLogsRequestDataWithMethod:(id)method postData:(id)data;
-(id)buildRequestDataWithMethod:(id)method postData:(id)data;
-(id)initWithURL:(id)url postData:(id)data isLog:(BOOL)log;
-(void)dealloc;
@end
