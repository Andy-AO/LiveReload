
#import <Foundation/Foundation.h>


@interface LRSelfTestOutputExpectation : NSObject

- (id)initWithExpectationData:(id)expectation;

@property(nonatomic, readonly) NSString *content;
@property(nonatomic, readonly) BOOL negated;

- (BOOL)validateWithContent:(NSString *)content;

@end
