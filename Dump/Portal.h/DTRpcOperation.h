/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTRpcBaseOperation.h"

@class NSArray, DTRpcMethod;

@interface DTRpcOperation : DTRpcBaseOperation {
@private
	DTRpcMethod* _method;
	NSArray* _params;
	id _resultObject;
}
@property(retain, nonatomic) id resultObject;
@property(retain, nonatomic) NSArray* params;
@property(retain, nonatomic) DTRpcMethod* method;
-(void).cxx_destruct;
-(void)didFinish;
-(void)didStart;
-(id)buildRequestDataWithMethod:(id)method params:(id)params;
-(id)copy;
-(void)start;
-(id)initWithURL:(id)url method:(id)method params:(id)params;
@end
