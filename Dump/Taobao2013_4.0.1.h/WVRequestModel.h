//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVRequestModel : NSObject
{
    id _loadingRequest;
    CDUnknownBlockType _modelStartBlock;
    CDUnknownBlockType _modelFailureBlock;
    CDUnknownBlockType _modelSuccessBlock;
    id <WVRequestModelDelegate> _delegate;
}

@property(nonatomic) id <WVRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType modelSuccessBlock; // @synthesize modelSuccessBlock=_modelSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType modelFailureBlock; // @synthesize modelFailureBlock=_modelFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType modelStartBlock; // @synthesize modelStartBlock=_modelStartBlock;
@property(retain, nonatomic) id loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void).cxx_destruct;
- (void)didFailLoad;
- (void)didFinishLoad;
- (void)didStartLoad;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)cleanDelegateAndCancel;
- (void)cancel;
- (BOOL)isLoading;
- (void)dealloc;
- (void)setMTOPRequestSelectors:(id)arg1;

@end

