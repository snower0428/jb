//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSURL, UIViewController;

@interface CPCommand : NSObject
{
    UIViewController *_currentController;
    NSString *_path;
    NSString *_action;
    id _target;
    NSMutableDictionary *_parmas;
    int _type;
    NSURL *_url;
    float _version;
}

+ (id)commandWithUrl:(id)arg1;
+ (id)commandWithString:(id)arg1;
@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIViewController *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) NSMutableDictionary *parmas; // @synthesize parmas=_parmas;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)parseParmas:(id)arg1;
- (BOOL)isVaildCommand;
- (void)initDataWithUrl:(id)arg1;
- (void)initDataWithString:(id)arg1;
- (id)init;

@end

