//
//  CMQuestion.h
//  
//
//  Created by luck-mac on 15/6/24.
//
//

#import <Foundation/Foundation.h>

@interface CMQuestion : NSObject
@property (nonatomic, strong) NSArray *cardList;
@property (nonatomic, strong) NSArray *options;
@property (nonatomic) NSUInteger targetCardIndex;
@property (nonatomic) CGFloat limitTime;
- (BOOL)checkAnswer:(NSInteger)answerIndex;
- (NSString *)getQuestion;
- (instancetype)initWithCardList:(NSArray *)cardList;
@end
