
#import "BARImageFilter.h"

@interface BARImageEnlargeFilter : BARImageFilter
{
    GLuint texelWidthOffsetUniform;
    GLuint texelHeightOffsetUniform;
    GLint radiusUniform;
    GLint scaleUniform;
    GLuint centerUniform;

}
@property(nonatomic) CGFloat radius;
@property(nonatomic) CGFloat scale;
@property(nonatomic) CGPoint center;

@end
