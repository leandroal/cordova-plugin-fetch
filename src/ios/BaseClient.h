#import "AFHTTPSessionManager.h"

@interface BaseClient : AFHTTPSessionManager

+ (instancetype __nullable)sharedClient;


- (NSURLSessionDataTask * __nonnull)dataTaskWithHTTPMethod:(NSString * __nullable)method
                                       URLString:(NSString * __nullable)URLString
                                      parameters:(NSDictionary * __nullable)parameters
                                         headers:(NSDictionary * __nullable)headers
                                         success:(void (^ __nullable)(NSURLSessionDataTask * __nullable, id __nullable))success
                                                   failure:(void (^ __nullable)(NSURLSessionDataTask * __nullable, NSError * __nullable, id __nullable))failure;

@end
