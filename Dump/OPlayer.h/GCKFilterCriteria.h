//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GCKFilterCriteria : NSObject
{
    int _type;
    NSString *_appID;
    NSArray *_namespaces;
}

+ (id)criteriaForRunningApplicationWithSupportedNamespaces:(id)arg1;
+ (id)criteriaForRunningApplicationWithID:(id)arg1 supportedNamespaces:(id)arg2;
+ (id)criteriaForAvailableApplicationWithID:(id)arg1;
@property(copy, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 appID:(id)arg2 namespaces:(id)arg3;

@end

