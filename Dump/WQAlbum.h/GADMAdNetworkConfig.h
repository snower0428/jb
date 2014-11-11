//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface GADMAdNetworkConfig : NSObject
{
    NSString *nid_;
    NSDictionary *credentials_;
    NSArray *adapterList_;
    Class adapterClass_;
    NSString *allocationId_;
    NSArray *impressionURLs_;
}

@property(readonly, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=impressionURLs_;
@property(readonly, nonatomic) NSString *allocationId; // @synthesize allocationId=allocationId_;
@property(readonly, nonatomic) Class adapterClass; // @synthesize adapterClass=adapterClass_;
@property(readonly, nonatomic) NSArray *adapterList; // @synthesize adapterList=adapterList_;
@property(readonly, nonatomic) NSDictionary *credentials; // @synthesize credentials=credentials_;
@property(readonly, nonatomic) NSString *nid; // @synthesize nid=nid_;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) NSString *pubId;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

