//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBAlipayTodoResponseModel : TBModel
{
    NSString *_result;
}

@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
