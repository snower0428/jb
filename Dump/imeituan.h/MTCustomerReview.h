//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDomainObject.h"

@class NSArray, NSString;

@interface MTCustomerReview : MTDomainObject
{
    int _reviewID;
    NSString *_body;
    NSString *_reviewTime;
    int _rating;
    NSString *_ratingText;
    int _userID;
    NSString *_userName;
    int _userLevel;
    NSString *_replyComment;
    NSString *_replyTime;
    NSArray *_picInfoArray;
}

+ (id)createEntity;
@property(retain, nonatomic) NSArray *picInfoArray; // @synthesize picInfoArray=_picInfoArray;
@property(copy, nonatomic) NSString *replyTime; // @synthesize replyTime=_replyTime;
@property(copy, nonatomic) NSString *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) int userLevel; // @synthesize userLevel=_userLevel;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(nonatomic) int rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *reviewTime; // @synthesize reviewTime=_reviewTime;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) int reviewID; // @synthesize reviewID=_reviewID;
- (void).cxx_destruct;
- (void)setWithDictionary:(id)arg1;

@end

