//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, SPDaemonQueryToken, SPSearchResultDeserializer;

@protocol SPDaemonQueryDelegate
- (void)searchDaemonQueryCompleted:(SPDaemonQueryToken *)arg1;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 addedResults:(SPSearchResultDeserializer *)arg2;
@end

