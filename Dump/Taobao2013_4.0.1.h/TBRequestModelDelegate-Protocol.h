//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, TBRequestModel;

@protocol TBRequestModelDelegate
- (void)modelDidCancelLoad:(TBRequestModel *)arg1;
- (void)model:(TBRequestModel *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)modelDidFinishLoad:(TBRequestModel *)arg1;
- (void)modelDidStartLoad:(TBRequestModel *)arg1;

@optional
- (void)modelWillStartLoad:(TBRequestModel *)arg1;
@end

