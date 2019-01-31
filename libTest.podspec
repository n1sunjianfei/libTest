Pod::Spec.new do |s|
  s.name             = 'libTest'
  s.version          = '1.0.0'
  s.summary          = '库的基础模块'
  s.description      = <<-DESC
        库的基础模块,每个库都必须导入此库
                       DESC

  s.homepage         = 'https://github.com/n1sunjianfei/libTest'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liyaoyao903' => '535814116@qq.com' }
  s.source       = { :git => 'https://github.com/n1sunjianfei/libTest.git'}

#s.ios.deployment_target = '8.0'
#s.platform     = :ios, "8.0"
  s.vendored_frameworks = ['lib/*.framework']
#s.source_files = 'lib/*.framework'

end
