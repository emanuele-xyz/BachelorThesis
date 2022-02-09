\contentsline {lstlisting}{\numberline {2.1}Create Vulkan instance}{12}{}%
\contentsline {lstlisting}{\numberline {2.2}VkInstanceCreateInfo initialization}{12}{}%
\contentsline {lstlisting}{\numberline {2.3}VkApplicationInfo initialization}{13}{}%
\contentsline {lstlisting}{\numberline {2.4}Enabling the Khronos validation layer}{13}{}%
\contentsline {lstlisting}{\numberline {2.5}Enabling an extention to handle validation layer debug messages}{14}{}%
\contentsline {lstlisting}{\numberline {2.6}Setting up debug extension callbacks}{14}{}%
\contentsline {lstlisting}{\numberline {2.7}Extension function proxy}{14}{}%
\contentsline {lstlisting}{\numberline {2.8}Creating a window handle using Win32 API}{15}{}%
\contentsline {lstlisting}{\numberline {2.9}Compute window width and height}{16}{}%
\contentsline {lstlisting}{\numberline {2.10}Register Window Class}{16}{}%
\contentsline {lstlisting}{\numberline {2.11}Window Procedure}{17}{}%
\contentsline {lstlisting}{\numberline {2.12}Process Window Messages}{17}{}%
\contentsline {lstlisting}{\numberline {2.13}Window Cleanup}{17}{}%
\contentsline {lstlisting}{\numberline {2.14}Create Presentation Surface}{18}{}%
\contentsline {lstlisting}{\numberline {2.15}Filling in a VkWin32SurfaceCreateInfoKHR struct}{18}{}%
\contentsline {lstlisting}{\numberline {2.16}Presentation Surface Extensions}{18}{}%
\contentsline {lstlisting}{\numberline {2.17}Check for graphics operations support}{19}{}%
\contentsline {lstlisting}{\numberline {2.18}Check for present operations support}{20}{}%
\contentsline {lstlisting}{\numberline {2.19}Device extension for image presentation to the screen}{20}{}%
\contentsline {lstlisting}{\numberline {2.20}Create a logical device}{21}{}%
\contentsline {lstlisting}{\numberline {2.21}Create info struct when queue families are the same}{21}{}%
\contentsline {lstlisting}{\numberline {2.22}Create info struct when queue families are different}{22}{}%
\contentsline {lstlisting}{\numberline {2.23}Retrieve queue handles}{22}{}%
\contentsline {lstlisting}{\numberline {2.24}Create a swapchain}{23}{}%
\contentsline {lstlisting}{\numberline {2.25}Configure our swapchain}{23}{}%
\contentsline {lstlisting}{\numberline {2.26}Configure queue ownership over swapchain images}{23}{}%
\contentsline {lstlisting}{\numberline {2.27}Select swapchain image count}{24}{}%
\contentsline {lstlisting}{\numberline {2.28}Select swapchain image format}{24}{}%
\contentsline {lstlisting}{\numberline {2.29}Select swapchain image extent}{25}{}%
\contentsline {lstlisting}{\numberline {2.30}Select swapchain present mode}{25}{}%
\contentsline {lstlisting}{\numberline {2.31}Create swapchain image views}{26}{}%
\contentsline {lstlisting}{\numberline {2.32}Structure of our application}{27}{}%
\contentsline {lstlisting}{\numberline {3.1}Create semaphores}{29}{}%
\contentsline {lstlisting}{\numberline {3.2}Create graphics command pool}{29}{}%
\contentsline {lstlisting}{\numberline {3.3}Configure our graphics command pool}{29}{}%
\contentsline {lstlisting}{\numberline {3.4}Allocate a command buffer from our graphics command pool}{30}{}%
\contentsline {lstlisting}{\numberline {3.5}Configure command buffer creation}{30}{}%
\contentsline {lstlisting}{\numberline {3.6}Create a fence for our command buffer}{30}{}%
\contentsline {lstlisting}{\numberline {3.7}Create a render pass}{31}{}%
\contentsline {lstlisting}{\numberline {3.8}Configure our render pass}{31}{}%
\contentsline {lstlisting}{\numberline {3.9}Render pass attachment descriptions}{31}{}%
\contentsline {lstlisting}{\numberline {3.10}Render pass subpass descriptions}{32}{}%
\contentsline {lstlisting}{\numberline {3.11}Acquire the next swapchain image that will be presented}{33}{}%
\contentsline {lstlisting}{\numberline {3.12}Wait for command buffer execution to finish}{33}{}%
\contentsline {lstlisting}{\numberline {3.13}Create a new framebuffer}{33}{}%
\contentsline {lstlisting}{\numberline {3.14}Configure our framebuffer}{34}{}%
\contentsline {lstlisting}{\numberline {3.15}Boilerplate code for recording a command buffer}{34}{}%
\contentsline {lstlisting}{\numberline {3.16}Change window clear color over time}{34}{}%
\contentsline {lstlisting}{\numberline {3.17}Clear the window using a render pass}{34}{}%
\contentsline {lstlisting}{\numberline {3.18}Configure our render pass instance}{35}{}%
\contentsline {lstlisting}{\numberline {3.19}Submit command buffer to the GPU}{35}{}%
\contentsline {lstlisting}{\numberline {3.20}Configure command buffer submission}{36}{}%
\contentsline {lstlisting}{\numberline {3.21}Issue a present command}{36}{}%
\contentsline {lstlisting}{\numberline {3.22}Configure present command submission}{36}{}%
\contentsline {lstlisting}{\numberline {3.23}Structure of our application}{37}{}%
\contentsline {lstlisting}{\numberline {4.1}Create a pipeline state object}{39}{}%
\contentsline {lstlisting}{\numberline {4.2}Configure pipeline state object}{39}{}%
\contentsline {lstlisting}{\numberline {4.3}Shader stages}{39}{}%
\contentsline {lstlisting}{\numberline {4.4}Describe a shader stage}{40}{}%
\contentsline {lstlisting}{\numberline {4.5}Create a shader module}{40}{}%
\contentsline {lstlisting}{\numberline {4.6}Our first vertex shader}{41}{}%
\contentsline {lstlisting}{\numberline {4.7}Our first fragment shader}{41}{}%
\contentsline {lstlisting}{\numberline {4.8}Configure vertex input state}{42}{}%
\contentsline {lstlisting}{\numberline {4.9}Configure input assembly state}{42}{}%
\contentsline {lstlisting}{\numberline {4.10}Configure viewport state}{42}{}%
\contentsline {lstlisting}{\numberline {4.11}Viewport}{42}{}%
\contentsline {lstlisting}{\numberline {4.12}Scissor}{43}{}%
\contentsline {lstlisting}{\numberline {4.13}Rasterization state}{43}{}%
\contentsline {lstlisting}{\numberline {4.14}Multisample state}{43}{}%
\contentsline {lstlisting}{\numberline {4.15}Depth stencil state}{44}{}%
\contentsline {lstlisting}{\numberline {4.16}Color blend state}{44}{}%
\contentsline {lstlisting}{\numberline {4.17}Color blend attachment state}{44}{}%
\contentsline {lstlisting}{\numberline {4.18}Create our pipeline layour}{45}{}%
\contentsline {lstlisting}{\numberline {4.19}Configure our pipeline layout}{45}{}%
\contentsline {lstlisting}{\numberline {4.20}Rendering our triangle}{45}{}%
